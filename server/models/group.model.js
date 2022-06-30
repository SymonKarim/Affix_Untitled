const mongoose = require('mongoose');

const groupSchema = new mongoose.Schema(
  {
    SuperAdmin: {
      type: mongoose.Schema.Types.ObjectId,
    },
    Admins: [mongoose.Schema.Types.ObjectId],
    members: [mongoose.Schema.Types.ObjectId],
    blocked: [mongoose.Schema.Types.ObjectId],
    restricted: [mongoose.Schema.Types.ObjectId],
    dp: {
      type: String,
        default: process.env.defaultImage
    },
  },
  { timestamps: true }
);

module.exports = mongoose.model('group', groupSchema);